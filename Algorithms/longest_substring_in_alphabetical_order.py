# o(n) solution.

n = len(s)

count = 0
max_count = 0
max_index = 0

for i in range(n-1):
    if(s[i] <= s[i + 1]):
        count = count + 1
        if(i == n-2):
            if(count + 1 > max_count):
                max_count = count + 1
                max_index = i - count + 1
    elif(count + 1 > max_count):
        max_count = count + 1
        max_index = i - count
        count = 0
    else:
        count = 0
    
print "Longest substring in alphabetical order is: " + s[max_index : max_count + max_index]
   
