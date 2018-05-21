'use strict';

const path = require('path');
const gulp = require('gulp');
const shell = require('shelljs');

const INPUT = process.env.INPUT;
const OUTPUT = process.env.OUTPUT;
const ENTRY_POINT = path.join(INPUT, 'words/main.cpp');
const BIN_FILE = path.join(OUTPUT, 'words/main.bin');


gulp.task('gcc', function(done) {
  shell.exec(`gcc ${ENTRY_POINT} -o ${BIN_FILE}`);
  done();
});

gulp.task('watch', function(done) {
  gulp.watch(
    path.join(INPUT, '**/*.cpp'),
    { usePolling: true },
    gulp.series('gcc')
  );
  done();
});

gulp.task('default', function(done) {
  gulp.series('gcc', 'watch')();
  done();
});
