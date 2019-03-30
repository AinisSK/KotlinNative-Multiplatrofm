#!/usr/bin/env node
"use strict";
let common = require('common-all');

const http = require('http');
//var admin = require('firebase-admin');
//var serviceAccount = require('/Users/ainissk/Projects/testFirebase/serviceAccountKey.json');

//admin.initializeApp();

const hostname = '127.0.0.1';
const port = 3000;

//var db = admin.firestore();

const server = http.createServer((req, res) => {

//    var docRef = db.collection('users').doc('alovelace');
//
//    var setAda = docRef.set({
//      first: 'Ada',
//      last: 'Lovelace',
//      born: 1815
//    });


    common.rubylich.ktmp.testMethod("from k2js");

    res.statusCode = 200;
    res.setHeader('Content-Type', 'text/plain');
    res.end('Hello World\n');

});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});