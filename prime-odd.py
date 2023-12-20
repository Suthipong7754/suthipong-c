num = int(input())
for i in range(num):
    number = int(input())
    print("F") if number % 2 == 0 and number != 2 else print("T")