import random

def generate_token():
    # Use random module to generate token
    token = random.randint(1000, 9999)
    return token

secure_token = generate_token()
print("Secure Token:", secure_token)
