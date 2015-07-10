const angular = require('angular');
const ngModule = angular.module('app', []);
require('./directives')(ngModule);
ngModule.run(function () {
    console.log('Angular !');
});
