# 01 knapsack using dynamic programming
# find maximum betweeen two numbers
def max(a, b):
    if a>b:
        return a
    return b

# sort the inputs according to their weights
def sort_weights(weights, profits):
    if weights != sorted(weights.copy()):
        for i in range(len(weights)-1):
            if weights[i] > weights[i+1]:
                # swap
                weights[i], weights[i+1] = weights[i+1], weights[i]
                profits[i], profits[i+1] = profits[i+1], profits[i]

# knapsack funciton
def knapsack(weights, profits, capacity, table):
    # code
    for i in range(1, len(weights)+1):
        for j in range(1, capacity+1):
            # fourmula
            if weights[i-1] <= j:
                table[i][j] = max(profits[i-1]+table[i-1][j-weights[i-1]], table[i-1][j])
            else:
                table[i][j] = table[i-1][j]
    return table

# testing
if __name__ == '__main__':
    weights = list(map(int, input('Enter the weights: ').strip().split(' ')))
    profits = list(map(int, input('Enter the profits: ').strip().split(' ')))
    capacity = int(input('Enter the capacity: ').strip())
    selected_indexes = [0 for _ in range(len(weights))]
    table = [[0 for _ in range(capacity+1)] for _ in range(len(weights)+1)]
    sort_weights(weights, profits)
    table = knapsack(weights, profits, capacity, table)
    for a in table:
        for b in a:
            print(f'{b:>3}', end='')
        print()
    print(f"Maximum profit is: {table[len(weights)][capacity]}")
