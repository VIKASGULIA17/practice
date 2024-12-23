l=["hello world\t" for i in range(1000)]
with open('bigfile.txt','w') as f:
    f.writelines(l)
    print("writing successful")
    
    
    #directly accesing it while checking in while loop 
with open('bigfile.txt','r') as f:
    while(f.read(1000)!=""):
        print(f.read(1000),end="-------------------------------------------------")
    print("\nreading successful")
    
    #using len to check and break in chunks
    
    
with open('bigfile.txt','r') as f:
    while(len(f.read(100))>0):
        print(f.read(100),end="-------------------------------------------------")
    print("\nreading successful")
    

    
