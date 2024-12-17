class Atm:
    def __init__ (self):
        self.pin=''
        self.balance=0
        self.menu()
    def menu(self):
        user_input=input("""
    hi ! how can  i help you?
    1. press 1 to create pin
    2. press 2 to change pin                    
    3. press 3 to check balance                    
    4. press 4 to withdraw
    5. press 5 to exit                                            
    """)
        if user_input=='1':
            self.create_pin()
            
        elif user_input=='2':
            self.change_pin()
            
        elif user_input=='3':
            self.check_bal()
            
        elif user_input=='4':
            self.withdraw()
            print("Your balance is currently :$",self.balance)
            
        else:
            print("Thank for your transaction")
            
     # this is to create pin   
     
    def create_pin(self):
        pin=input("Change Your Pin")
        self.pin=pin
        bal=int(input("Change Your balance"))
        self.balance=bal
        print("Pin created successfully")
        self.menu()
        
    def change_pin(self):
        check_pin=input("enter old pin")
        if(check_pin==self.pin):
            pin=input("Change Your Pin")
            self.pin=pin
            print("pin changed successfully")
            self.menu()
        else:
            print("ja re !")
            self.menu()
            
    def check_bal(self):
        print("Your balance is currently :$",self.balance)
        self.menu()
        
    def withdraw(self):
        check_pin=input("enter your pin")
        if(check_pin==self.pin):
            amount=int(input("Enter the amount you want to withdraw"))
            self.balance-=amount
            self.menu()
        else:
            print("chal nikal")
            self.menu()
            
        
    
obj=Atm()