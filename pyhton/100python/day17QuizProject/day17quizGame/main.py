class User:
    def __init__(self, user_id, username) -> None:
        self.id=user_id
        self.username=username
        self.followers=0 
        self.following=0
    
    def follow(self, user):
        user.followers+=1
        self.following+=1  

user_1=User("19", "cembora")
print(user_1.id)
user_2=User("34", "ceylan")
print(user_2.username)
user_1.follow(user_2)
print(user_1.followers)
print(user_1.following)
print(user_2.followers)
print(user_2.following)