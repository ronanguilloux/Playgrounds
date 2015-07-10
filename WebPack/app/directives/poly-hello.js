module.exports = function (ngModule) {
  ngModule.directive('polyHello', function () {
    require('./poly-hello.css'); // via css-loader
    return {
      restrict: 'E',
      scope: {},
      //templateUrl: 'directives/poly-hello.html', // via XHR
      template: require('./poly-hello.html'), // via node et raw-loader
      controllerAs: 'vm',
      controller: function () {
        var vm = this;
        vm.name = 'Polypodes';
      }
    }
  })
}
