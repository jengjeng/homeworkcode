import Vue from 'vue'
import { Col, Row, Menu, MenuItem, MenuItemGroup, Tabs, TabPane } from 'element-ui'
import App from './App.vue'

Vue.use(Col)
Vue.use(Row)
Vue.use(Menu)
Vue.use(MenuItem)
Vue.use(MenuItemGroup)
Vue.use(Tabs)
Vue.use(TabPane)

/* eslint-disable no-new */
new Vue({
  el: '#app',
  render: h => h(App)
})
