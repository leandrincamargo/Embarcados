var express = require('express');
var router = express.Router();
var SerialPort = require('serialport');
var port = new SerialPort('COM6');

/* GET home page. */
router.get('/', function (req, res, next) {
  res.render('index', {
    title: 'Express'
  });
});
router.post('/', function (req, res) {
  console.log(req.body.nome)
  port.write(req.body.nome, function (err) {
    if (err) {
      return console.log(err.message);
    }
    return console.log("port OK");
  });
  return console.log("POST ok");
});

module.exports = router;