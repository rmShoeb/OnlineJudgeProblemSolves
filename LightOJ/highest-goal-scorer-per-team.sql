SELECT
    Goals.player,
    Goals.team,
    Goals.goals_scored,
    Goals.played
FROM
    Goals
JOIN (
    SELECT
        team,
        MAX(goals_scored) AS team_max
    FROM Goals
    GROUP BY team
) AS tab_team_max
    ON
        Goals.team = tab_team_max.team
        AND Goals.goals_scored = tab_team_max.team_max
ORDER BY
    team,
    player
;