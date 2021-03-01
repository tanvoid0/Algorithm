/*
  input
    Barcelona
    2011
  output
    35
 */
const https = require('https');
const axios = require('axios');
const url = (year, teamNo, team) => `https://jsonmock.hackerrank.com/api/football_matches?year=${year}&team${teamNo}=${team}&page=1`
async function getTotalGoals(team, year){
  console.log('start');
  const team1 = await axios.get(url(year, 1, team)).then(({data}) => data.data);
  let goals = 0;
  for(let i in team1){
    goals += parseInt(team1[i].team1goals);
  }
  const team2 = await axios.get(url(year, 2, team)).then(({data}) => data.data);
  for(let i in team2) {
    goals += parseInt(team2[i].team2goals);
  }
  return goals;
}
getTotalGoals('Barcelona', 2011).then(output => {
  console.log(output);
  console.log('end');
})

