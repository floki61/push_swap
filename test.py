from  random import sample
arg = int(input())
stack_a = []
stack_a = sample(range(arg), arg)
print(' '.join([str(i) for i in stack_a]))
# make re ; make bonus ;ARG=$(python3 ./test.py); ./push_swap $ARG  | wc -l  