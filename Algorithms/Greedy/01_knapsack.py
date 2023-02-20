# 01 knapsack using greedy

def knapsack(weights, profits, capacity, total_items):
    per_unit_cost = dict()
    cost = 0
    
    for i in range(total_items):
        per_unit_cost.update({weights[i]/profits[i]:i})

    # sort according to their order
    _per_unit_cost = sorted(per_unit_cost)

    # select items
    for a in _per_unit_cost:
        index = per_unit_cost.get(a)
        if weights[index] < capacity:
            cost += profits[index]
            capacity -= weights[index]

    return cost

# testing
if __name__ == "__main__":
    item_weights = [10,8,4,9,5]
    item_profits = [4,5,8,4,7]
    n = 5
    c = 20
    print(knapsack(item_weights, item_profits,c,n))
    
    
