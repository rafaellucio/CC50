var gulp = require('gulp'),
	browserSync = require('browser-sync').create();

gulp.task('browser-sync', function () {
	browserSync.init({
		server: {
			baseDir: './app'
		}
	});
});

gulp.task('default', ['browser-sync'], function () {
	gulp.watch(['app/**/*.html', '!app/bower_components/**/*'], browserSync.reload);
	gulp.watch(['app/**/*.css', '!app/bower_components/**/*'], browserSync.reload);
	gulp.watch(['app/**/*.js', '!app/bower_components/**/*'], browserSync.reload);
});