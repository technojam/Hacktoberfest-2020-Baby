mileage=12
amount_per_litre=40
distance_one_way=190
per_head_cost=0
divisible_by_five=False
per_head_cost = ((2*distance_one_way*amount_per_litre)/mileage)/4
if per_head_cost%5==0:
    divisible_by_five=True
else:
    divisible_by_five=False
print(per_head_cost)
print(divisible_by_five)
