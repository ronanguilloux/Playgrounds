'use strict';

angular.module('yoAngularApp')
.controller('MessageCtrl', function ($scope, $http) {
    $http.get('/api/awesomeThings').success(function(awesomeThings) {
        $scope.awesomeThings = awesomeThings;
    });
})
.controller('MessageCtrl', function ($scope, $http) {
    $http.get('/api/message').success(function(message) {
        $scope.message = message;
    });
});
