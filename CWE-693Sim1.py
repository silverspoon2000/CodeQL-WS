import hashlib

# Using SHA1 hash
def hash(data):
    sha1_hash = hashlib.sha1(data.encode()).hexdigest()
    return sha1_hash
    
# User password input
username = "JohnDoe"
user_password = "p@s5w0Rd!" 

# Salting the password and hashing the result with SHA1
# Assume that the salting is performed in a reliable and secure way
hashed_password = hash(user_password + salt[username])

print("Hashed password:", hashed_password)
