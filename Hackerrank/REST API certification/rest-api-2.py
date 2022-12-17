import requests

def getWinner(competition, year):
    x = requests.get(f'https://jsonmock.hackerrank.com/api/football_competitions?name={competition}&year={year}')
    return x.json()['data'][0]['winner']
def countGoals(term, competition, team, year):
    total_pages = 1
    page = 1
    total_goals = 0
    while(page<=total_pages):
        x = requests.get(f'https://jsonmock.hackerrank.com/api/football_matches?competition={competition}&year={year}&team{term}={team}&page={page}')
        for match in x.json()['data']:
            total_goals = total_goals + int(match[f'team{term}goals'])
        total_pages = x.json()['total_pages']
        page = page+1
    return total_goals
def getWinnerTotalGoals(competition, year):
    total_goals = 0
    for term in range(2):
        total_goals = total_goals+countGoals(term+1, competition, getWinner(competition, year), year)
    return total_goals