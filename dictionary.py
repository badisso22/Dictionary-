input_string = input("enter a word or sentence: ")
letter_count = {}

for char in input_string:
    
    if char.isalpha():  
        
        char = char.lower()
        
       
        if char in letter_count:
            letter_count[char] += 1
        else:
            
            letter_count[char] = 1
print("Letter occurrences:")
for letter, count in letter_count.items():
    print(f"{letter}: {count}")