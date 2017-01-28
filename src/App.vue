<template>
  <div id="app">
    <el-row class="layout">
      <el-col :xs="8" :sm="6" :md="4" :lg="4" class="full-height">
        <el-menu @select="taskSelect" mode="vertical" default-active="0" class="el-menu-vertical full-height layout-tab" theme="dark">
          <div class="logo">
            <img src="https://firebasestorage.googleapis.com/v0/b/acourse-d9d0a.appspot.com/o/user%2FAdlNpDntmLYMTOe2zzdXZX5Dv4x1%2F1480173528552?alt=media&token=46b79a10-f81f-4df6-8be6-313c10bae243">
            <h1 class="username text-center color-gray">{{ data.username }}</h1>
          </div>
          <el-menu-item-group title="Tasks">
            <el-menu-item v-for="(task, i) in data.tasks" :index="i.toString()"><i class="el-icon-edit"></i>{{task.name}}</el-menu-item>
          </el-menu-item-group>
        </el-menu>
      </el-col>
      <el-col :xs="8" :sm="9" :md="10" :lg="10" class="full-height">
        <el-tabs v-if="i === current" v-for="(task, i) in data.tasks" type="border-card" class="full-height layout-tab code-tab layout-wrapper">
          <el-tab-pane v-for="file in task.files" :label="file.name">
            <codemirror :code="file.content" :options="data.codemirror"></codemirror>
          </el-tab-pane>
        </el-tabs>
      </el-col>
      <el-col :xs="8" :sm="9" :md="10" :lg="10" class="full-height">
        <el-tabs v-if="i === current" v-for="(task, i) in data.tasks" type="border-card" class="full-height layout-tab output-tab layout-wrapper">
          <el-tab-pane label="Output">
            <pre class="output" v-html="task.output"></pre>
          </el-tab-pane>
        </el-tabs>
      </el-col>
    </el-row>
  </div>
</template>

<script>
import data from './data.js'
import codemirror from './CodeMirror.vue'
export default {
  data () {
    return {
      current: 0,
      data
    }
  },
  methods: {
    taskSelect(key, keyPath) {
      this.current = +key
    }
  },
  components: {
    codemirror
  }
}
</script>

<style>
html,
body {
  overflow: hidden;
  font-family: Helvetica Neue, Helvetica, Hiragino Sans GB, SimSun, sans-serif;
  font-weight: 400;
  -webkit-font-smoothing: antialiased;
}

html,
body,
#app,
.layout {
  padding: 0;
  margin: 0;
  width: 100%;
  height: 100%;
}
.el-menu-item, .el-submenu__title, .el-menu-item-group__title, .el-tabs {
  font-size: 1em;
}

.layout-wrapper {
  display: flex;
  flex-flow: column nowrap;
  height: 100%;
}
.layout-wrapper .el-tabs__content {
  flex: 1 1 auto;
  overflow: auto;
}

.text-center {
  text-align: center;
}

.full-height {
  height: 100%;
}

.layout-tab {
  border-radius: 0;
  box-shadow: none;
  overflow: auto;
  border-top: 0;
  border-bottom: 0;
}
.code-tab .el-tabs__content {
  padding: 0;
  padding-left: 0.5em;
}
.output-tab {
  border-left: 0;
}

.layout > .el-col,
.el-tabs--border-card,
.el-tabs--border-card>.el-tabs__header>.el-tabs__item.is-active {
  background: #fafafa;
}

.logo {
  padding: 10% 15% 0 15%;
}

.logo>img {
  display: inline-block;
  width: 100%;
  max-width: 250px;
  margin: auto;
}

.color-gray {
  color: #97a8be;
}
.output {
  color: #222;
  font-weight: 700;
}

</style>
