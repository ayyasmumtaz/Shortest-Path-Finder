const express = require('express');
const bodyParser = require('body-parser');
const { exec } = require('child_process');

const app = express();
const port = 3000;

app.use(bodyParser.urlencoded({ extended: false }));

app.post('/findPath', (req, res) => {
    const start = req.body.start;
    const end = req.body.end;
    const command = `./dijkstra ${start} ${end}`;
  
    exec(command, (error, stdout, stderr) => {
        console.log('Command:', command);
        console.log('Error:', error);
        console.log('Output:', stdout);
        console.log('Error Output:', stderr);
      if (error) {
        console.error(`Error executing C++ code: ${error}`);
        res.send('An error occurred.');
      } else {
        res.send(stdout);
      }
    });
  });
  
app.use(express.static('public'));

app.listen(port, () => {
  console.log(`Server running on http://localhost:${port}`);
});
