class File:
    def __init__(self,n,temp):
        self.v=n
        self.name=temp
        self.display()
    def display(self):
        print(self.v)
        print(self.name)
obj=File(10,"sring")