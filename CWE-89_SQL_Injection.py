import sqlite3

def login_successful(username, password):
    query = "SELECT * FROM users WHERE username = '" + username + "' AND password = '" + password + "'"

    conn = sqlite3.connect('mydb.db')
    cursor = conn.cursor()
    cursor.execute(query)
    result = cursor.fetchone()
    conn.close()

return result

username = input("Enter username: ")
password = input("Enter password: ")
login_successful(username, password)
