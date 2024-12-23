import pickle
f=open("binary.dat","wb")
l=[1,"hello","ljahdsf"]
pickle.dump(l,f)
f.close()