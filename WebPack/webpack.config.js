module.exports = {
  context: __dirname + '/app',
  entry: './index.js',
  output: {
    path: __dirname + '/app',
    filename: 'bundle.js'
  },
  module: {
    loaders: [
      { test: /\.html$/, loader: 'html', exclude: /node_modules/ },
      { test: /\.css$/, loader: 'style!css', exclude: /node_modules/ },
      { test: /\.js$/, loader: 'babel', exclude: /node_modules/ },
      { test: /\.ttf$|\.otf$|\.png$/, loader: "file" }
    ]
  }
}
