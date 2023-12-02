class Bank:
    def __init__(self, name, address, email):
        self.name = name
        self.email = email
        self.address = address
    
    def deposit(self, taka, amount):
        self.taka = taka
        self.amount = amount
    
a = Bank('aaa', '7B', 'a@gmail')
print(a.name)