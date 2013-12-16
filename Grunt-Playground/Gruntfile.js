/*
 * Gruntfile.ronan.js
 * Copyright (C) 2013 ronan <ronan@mbp-de-ronan>
 *
 * Distributed under terms of the MIT license.
 */

module.exports = function(grunt) {

    grunt.initConfig({
        maTacheSuite: {
            foo: [1, 2, 3],
            bar: "Hello World",
            baz: false
        }
    });

    // Enregistrement d'une tâche
    // Help:
    // $ grunt --help
    // $ grunt
    //
    grunt.registerTask("default", "Ma description de tâche default", function(){
        console.log('tâche default');
    });

    grunt.registerTask("maTache2", "Ma description de tâche 2", function(){
        console.log('tâche 2');
    });

    grunt.registerTask("toto", "Ma description de tâche 2", ["default","maTache2"]);

    grunt.registerMultiTask("maTacheSuite", "Ma description de tâche 2", function() {
        console.log(this);
    });

    // Chargement d'un module
    //grunt.loadNpmTasks('package');
};


