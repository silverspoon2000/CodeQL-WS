import hashlib

# Using MD5 hash (a weak hash function)
def weak_hash(data):
    md5_hash = hashlib.md5(data.encode()).hexdigest()
    return md5_hash

# User password input
user_password = "mysecret123"

# Hashing the password using the weak hash function
hashed_password = weak_hash(user_password)

print("Hashed password:", hashed_password)
