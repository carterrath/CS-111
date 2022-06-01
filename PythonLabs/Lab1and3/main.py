def in_to_cm(inches):
  cm_per_in = 2.54
  centimeters = inches * cm_per_in
  return centimeters
inches_amount = float(input("How many inches?: "))
print("the equivalent centimeters:", in_to_cm(inches_amount))