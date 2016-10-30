import random

board = [[' ', ' ', ' '],
         [' ', ' ', ' '],
         [' ', ' ', ' ']]


def print_board(board):
    print "Current Board: "
    print " %s | %s | %s " % (board[0][0], board[0][1], board[0][2])
    print "-----------"
    print " %s | %s | %s " % (board[1][0], board[1][1], board[1][2])
    print "-----------"
    print " %s | %s | %s " % (board[2][0], board[2][1], board[2][2])


def user_turn(board, avatar):
    valid = False

    while not valid:
        row = raw_input("Enter valid row (1-3): ")
        col = raw_input("Enter valid col (1-3): ")

        row = int(row) - 1
        col = int(col) - 1

        if (row <= 2) and (col <= 2) and board[row][col] == ' ':
            valid = True
            board[row][col] = avatar
        else:
            print "Invalid selection, or space taken"

def computer_turn(board, avatar):
    done = False

    while not done:
        randrow = random.randint(0, 2)
        randcol = random.randint(0, 2)

        if board[randrow][randcol] == ' ':
            board[randrow][randcol] = avatar
            done = True

def game_over(board):
    return ((board[0][0] == board[0][1] == board[0][2]) and board[0][0] != ' ') or \
        ((board[1][0] == board[1][1] == board[1][2]) and board[1][0] != ' ') or \
        ((board[2][0] == board[2][1] == board[2][2]) and board[2][0] != ' ') or \
        ((board[0][0] == board[1][0] == board[2][0]) and board[0][0] != ' ') or \
        ((board[0][1] == board[1][1] == board[2][1]) and board[0][1] != ' ') or \
        ((board[0][2] == board[1][2] == board[2][2]) and board[0][2] != ' ') or \
        ((board[0][0] == board[1][1] == board[2][2]) and board[0][0] != ' ') or \
        (board[0][2] == board[1][1] == board[2][0] and board[0][2] != ' ')


while not game_over(board):
    turn = 'X'

    print_board(board)

    user_turn(board, 'X')

    if game_over(board):
        break;

    print_board(board)

    turn = 'O'
    computer_turn(board, 'O')


print_board(board)
print turn, "is the winner!"




