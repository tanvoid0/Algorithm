class Palindrome:
  @staticmethod
  def is_palindrome(word):
      word = word.lower()
      j = len(word)
      pal = True
      for i in range(j):
          j-=1
          if(word[i] != word[j]):
              pal = False
              break
      return pal

word = input()
print(Palindrome.is_palindrome(word))