import os 
def raisePrivileges(): 
    print('## Privileges Raised ##') 
 
def lowerPrivileges(): 
    print('$$ Privileges Lowered $$') 
def makeNewUserDir(username): 
    try: 
        raisePrivileges() 
        os.mkdir('./' + username) 
        lowerPrivileges() 
 
    except OSError: 
        print('Unable to create new user directory for user:' + username) 
        return False 
 
    return True 
 
makeNewUserDir('new_user_dir') 
