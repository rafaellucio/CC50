requirejs.config({
	baseUrl: 'js',
	paths: {
		jquery: '../bower_components/jquery/jquery',
		bootstrap: '../bower_components/bootstrap/dist/js/bootstrap'
	},
	shim: {
		bootstrap: {
			deps: ['jquery'], 
			exports: '$.fn.popover'
		}
	}
});

define('globals', ['jquery', 'bootstrap'], function($){
	return $;
});

requirejs(['modules/main']);