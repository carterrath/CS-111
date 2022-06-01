#The number of shares is 350.
shares = 350
#The price of the stock is $3401.80.
stock_price = 3401.8
#Multiply the number of shares with the prices of the stock to be the proceeds.
proceeds = shares * stock_price
#The commission rate is 2%.
comission_rate = .02
#Multiply the proceeds by the commission rate to be the commission.
comission = proceeds * comission_rate
#Subtract the commission from the proceeds to be the final proceeds.
final_proceed = proceeds - comission
print (final_proceed)
print ("$1,166,817.40 from selling a stock")