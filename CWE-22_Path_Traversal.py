import os

def get_file_content(file_path): 
    base_dir = "/base_dir/" 
    full_path = os.path.join(base_dir, file_path) 
 
    if not full_path.startswith(base_dir): 
        print("Access denied") 
        return 
 
    try: 
        with open(full_path, "r") as file: 
            contents = file.read() 
            print("File contents:", contents) 
             
    except Exception as e: 
        print("Error:", e) 
 
user_input = input("Enter a file path: ") 
get_file_content(user_input)
