participants = 5
scores = []

for i in range(participants):
    participant_scores = []
    for j in range(participants-1):
        score = int(input(f"Enter score for participant {i+1} from participant {j+1}: "))
        participant_scores.append(score)
    total_score = sum(participant_scores)
    scores.append(total_score)

winning_participant = scores.index(max(scores)) + 1
winning_score = max(scores)

print(f"The winning participant is participant {winning_participant} with a total score of {winning_score}.")
