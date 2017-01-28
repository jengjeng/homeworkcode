export default {
  username: 'Wittawat Patcharinsak',
  codemirror: {
    language: 'cpp'
  },
  tasks: [
    {
      name: 'Homework 1',
      output: require('raw-loader!./data/1.out.txt'),
      files: [
        {
          name: 'main.c',
          content: require('raw-loader!./data/1.c')
        }
      ]
    }, {
      name: 'Homework 2',
      output: require('raw-loader!./data/2.out.txt'),
      files: [
        {
          name: 'main.c',
          content: require('raw-loader!./data/2.c')
        }
      ]
    }, {
      name: 'Homework 3',
      output: require('raw-loader!./data/3.out.txt'),
      files: [
        {
          name: 'main.c',
          content: require('raw-loader!./data/3.c')
        }
      ]
    }, {
      name: 'Homework 4',
      output: require('raw-loader!./data/4.out.txt'),
      files: [
        {
          name: 'main.c',
          content: require('raw-loader!./data/4.c')
        }
      ]
    }
  ]
}