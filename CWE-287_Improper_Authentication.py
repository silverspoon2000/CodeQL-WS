import sqlite3 
import hashlib 
 
class UserAuthenticationSystem: 
    def __init__(self, db_name): 
        self.conn = sqlite3.connect(db_name) 
        self.create_table() 
 
    def create_table(self): 
        self.conn.execute(''' 
            CREATE TABLE IF NOT EXISTS users ( 
                id INTEGER PRIMARY KEY AUTOINCREMENT, 
                username TEXT NOT NULL, 
                password TEXT NOT NULL 
            ); 
        ''') 
        self.conn.commit() 
 
    def register_user(self, username, password): 
        password_hash = hashlib.sha256(password.encode()).hexdigest() 
        self.conn.execute(''' 
            INSERT INTO users (username, password) 
            VALUES (?, ?); 
        ''', (username, password_hash)) 
        self.conn.commit() 
 
    def login_user(self, username, password): 
        p_hash = hashlib.sha256(password.encode()).hexdigest() 
        cursor = self.conn.execute(''' 
            SELECT * FROM users 
            WHERE username = ? AND password = ?; 
        ''', (username, p_hash)) 
        user_data = cursor.fetchone() 
        if user_data: 
            return f"Welcome, {username}!" 
        else: 
            return "Invalid username or password." 
 
# Simulating the scenario 
auth_system = UserAuthenticationSystem("user_db.sqlite") 
 
# Register a new user 
auth_system.register_user("alice", "password123") 
 
# Attempt to log in with password 
login_result = auth_system.login_user("alice", "password123") 
print(login_result)
