# define a function that takes the total cost and the amount paid as input
def calculate_change(total_cost, amount_paid):
  # calculate the change by subtracting the total cost from the amount paid
  change = amount_paid - total_cost
  
  # initialize the number of coins to be returned
  num_coins = 0
  
  # check how many coins of each type are needed to make the change
  if change >= 10:
    num_coins += change // 10
    change = change % 10
  if change >= 5:
    num_coins += change // 5
    change = change % 5
  if change >= 1:
    num_coins += change // 1
  
  # return the number of coins
  return num_coins
# calculate the change
change = calculate_change(30, 50)

# print the number of coins that must be returned as change
print(f"{change} coins must be returned as change.")