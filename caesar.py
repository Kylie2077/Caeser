#Kyaw Khaung Myo Lwin (Kyle)
#Caesar

word = input("Please enter the word: ").strip()
key = int(input("Please enter the key: "))
cipher = ""
for i in word:
    if i.isupper() and i.isalpha():
        #ord() function converts character into ASCII number.
        cipher += chr(((ord(i) + key - ord("A")) % 26) + ord("A")) #Formula (ciphertext = (text + key) % 26)
    elif i.islower() and i.isalpha():
        cipher += chr(((ord(i) + key - ord("a")) % 26) + ord("a"))
    else:
        cipher += i
        
print(cipher)
