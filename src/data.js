export default {
  username: 'Wittawat Patcharinsak',
  logo: 'https://avatars2.githubusercontent.com/u/6948085?v=3&s=460',
  language: 'cpp',
  tasks: [
    {
      name: 'Homework 1',
      output: require('raw!./data/1.c.out'),
      files: [
        {
          name: 'main.c',
          content: require('raw!./data/1.c')
        }
      ]
    }, {
      name: 'Homework 2',
      output: require('raw!./data/2.c.out'),
      files: [
        {
          name: 'main.c',
          content: require('raw!./data/2.c')
        }
      ]
    }, {
      name: 'Homework 3',
      output: require('raw!./data/3.c.out'),
      files: [
        {
          name: 'main.c',
          content: require('raw!./data/3.c')
        }
      ]
    }
  ]
}
