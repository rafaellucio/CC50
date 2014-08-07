var Main = {
	init: function () {

	},
	psetOne: function () {
		var skettles = Math.floor(Math.random() * 1024),
			elemClick = $('.step-one-click'),
			elemValue = $('.step-one-value');

		elemClick.on('click', function (ev) {
			ev.preventDefault();

			console.log(this);
		});
	},
	validate: function (obj) {

		obj['name'](this);

		function skittles() {
			console.log(arguments);
		}
	}
};

Main.init();