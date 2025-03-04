day = "Monday"

def calendar():
    global day
    print("The global day is:", day)
    
    day="Tuesday"
    print ("The global day is:", day)

calendar()