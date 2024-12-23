with open('bigfile.txt','r') as f:
    while(len(f.read(100))>0):
        print(f.read(100),end="-------------------------------------------------")
    print("\nreading successful")
    
