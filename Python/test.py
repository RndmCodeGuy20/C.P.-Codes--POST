word1 = input()
word = "None"
word2 = input()
print(word1 + word2)

word = word1
word1 = word2
word2 = word

print(word1 + word2)
a = 5
b = 10
c = 20
a,b,c=c,b,a

print(a,b,c)