export default {
  username: 'Wittawat Patcharinsak',
  codemirror: {
    language: 'cpp'
  },
  tasks: [
    {
      name: 'Homework 1',
      output: require('raw-loader!./1.out.txt'),
      files: [
        {
          name: 'main.c',
          content: require('raw-loader!./1.c')
        }
      ]
    }, {
      name: 'Homework 2',
      output: require('raw-loader!./2.out.txt'),
      files: [
        {
          name: 'main.c',
          content: require('raw-loader!./2.c')
        }
      ]
    }, {
      name: 'Homework 3',
      output: require('raw-loader!./3.out.txt'),
      files: [
        {
          name: 'main.c',
          content: require('raw-loader!./3.c')
        }
      ]
    }, {
      name: 'Homework 4',
      output: require('raw-loader!./4.out.txt'),
      files: [
        {
          name: 'main.c',
          content: require('raw-loader!./4.c')
        }
      ]
    }
  ]
}
