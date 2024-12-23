with open('bigfile.txt','r') as f:
    print(f.read(11))
    print(f.tell()) #tells the current position of the file pointer 
    
    print("current position of pointer",f.tell()) #tells the current position of the file pointer 
    
    f.seek(0)
    
    print("current position of pointer",f.tell()) #tells the current position of the file pointer 
    
    print(f.read(11))
    
    print("current position of pointer",f.tell()) #tells the current position of the file pointer 
    
    
