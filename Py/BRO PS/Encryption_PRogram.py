import random
import string 

chars = " " + string.ascii_letters + string.digits + string.punctuation
chars = list(chars)
key = chars.copy()
# print(chars)
random.shuffle(key)
# print(key)

# index = chars.index('a')
# print(index)

# Encode 
plain_text = input("ENter the name ")
cipher_text = ""

for letter in plain_text:
    index = chars.index(letter)
    cipher_text += key[index]

print(f"Original TExt {plain_text}")
print(f"Encoded TExt {cipher_text}")


# Decode
cipher_text = input("Enter the COded text: ")
decoded_text= ""

for letter in cipher_text:
    index = key.index(letter)
    decoded_text += chars[index]

print(f"Coded TExt {cipher_text}")
print(f"plain TExt {decoded_text}")















































































# import random
# import string

# chars = " " + string.punctuation + string.ascii_letters + string.digits
# chars = list(chars)
# # print(chars)

# keys = chars.copy()

# # print(f"chars: {chars}")

# random.shuffle(keys)
# # print(f"keys: {keys}")

# # Encrypt 
# plain_text = input("Enter the Text: ")
# cipher_text = ""

# # index = []
# # for letter in plain_text:
# #     index.append( plain_text.index(letter))
# # print(index)      #Enter the Text: kan
#                     # [0, 1, 2]

# # print(chars.index(' '))     # take every letter from the plain_text then find the index no. of that letter from the chars list then compare it with th ekeys list then usey cipgher text mein dalo  
# # a == 30 in chars ab 30 ko key[30] that will be our letter
# for letter in plain_text:
#     index = chars.index(letter)
#     cipher_text += keys[index]

# print(f"Original Text: {plain_text}")
# print(f"Encoded Text: {cipher_text}")

# # Decode
# decoded_text = ""
# encoded_text = input("Enter the encoded text : ")
# for letter in encoded_text:
#     index = keys.index(letter)
#     decoded_text += chars[index] 

# print()
# print(f"Encoded Text: {cipher_text}")
# print(f"Decoded Text: {decoded_text}")


