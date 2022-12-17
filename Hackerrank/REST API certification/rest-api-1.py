import requests

def countGoals(term, team, year):
    total_pages = 1
    page = 1
    total_goals = 0
    while(page<=total_pages):
        x = requests.get(f'https://jsonmock.hackerrank.com/api/football_matches?year={year}&team{term}={team}&page={page}')
        for match in x.json()['data']:
            total_goals = total_goals + int(match[f'team{term}goals'])
        total_pages = x.json()['total_pages']
        page = page+1
    return total_goals

def getTotalGoals(team, year):
    return countGoals(1, team, year)+countGoals(2, team, year)