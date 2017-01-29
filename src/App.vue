<template>
  <div id="app" class="theme-light">
    <el-row class="layout">
      <el-col :xs="8" :sm="6" :md="4" :lg="4" class="full-height">
        <el-menu @select="taskSelect" mode="vertical" default-active="0" class="el-menu-vertical full-height layout-tab" theme="dark">
          <div class="logo">
            <img :src="data.logo">
            <h2 class="username text-center color-gray">{{ data.username }}</h2>
          </div>
          <el-menu-item-group title="Tasks">
            <el-menu-item v-for="(task, i) in data.tasks" :index="i.toString()"><i class="el-icon-edit"></i>{{task.name}}</el-menu-item>
          </el-menu-item-group>
        </el-menu>
      </el-col>
      <el-col :xs="8" :sm="9" :md="10" :lg="10" class="full-height">
        <el-tabs v-if="i === current" v-for="(task, i) in data.tasks" type="border-card" class="full-height layout-tab code-tab layout-wrapper">
          <el-tab-pane v-for="file in task.files" :label="file.name">
            <codemirror :code="file.content" :language="data.language" class="code"></codemirror>
          </el-tab-pane>
        </el-tabs>
      </el-col>
      <el-col :xs="8" :sm="9" :md="10" :lg="10" class="full-height">
        <el-tabs v-if="i === current" v-for="(task, i) in data.tasks" type="border-card" class="full-height layout-tab output-tab layout-wrapper">
          <el-tab-pane label="Output">
            <pre class="output code" v-html="task.output"></pre>
          </el-tab-pane>
        </el-tabs>
      </el-col>
    </el-row>
  </div>
</template>

<script>
import data from './data.js'
import codemirror from './components/CodeMirror.vue'
export default {
  data () {
    return {
      current: 0,
      data
    }
  },
  methods: {
    taskSelect (key, keyPath) {
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
  /*-webkit-font-smoothing: antialiased;*/
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

.color-gray {
  color: #97a8be;
}
.code-tab {
  font-family: 'Source Code Pro', monospace;
  line-height: 1.2em;
}
.code {
  font-size: 1.1em;
  /*font-weight: 600;*/
}

.layout > .el-col,
.el-tabs--border-card,
.el-tabs--border-card>.el-tabs__header>.el-tabs__item.is-active {
  background: #fafafa;
}
.output {
  color: #222;
}


.theme-dark .el-menu--dark {
  background: #1F2D3D;
}
.theme-dark .layout > .el-col,
.theme-dark .el-tabs--border-card,
.theme-dark .el-tabs--border-card>.el-tabs__header>.el-tabs__item.is-active {
  background: #1F2D3D;
}
.theme-dark .el-tabs--border-card>.el-tabs__header {
  background: #324057;
}
.theme-dark .el-tabs--border-card {
  border: 1px solid #475669;
}
.theme-dark .el-tabs__header {
  border-bottom: 1px solid #475669;
}
.theme-dark .el-tabs--border-card>.el-tabs__header>.el-tabs__item.is-active:last-child {
  border-right-color: #475669;
}
.theme-dark .el-tabs--border-card>.el-tabs__header>.el-tabs__item.is-active:first-child {
  border-left-color: #475669;
}
.theme-dark .output {
  color: #fff;
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
  border-radius: 0 !important;
  box-shadow: none !important;
  overflow: auto !important;
  border-top: 0 !important;
  border-bottom: 0 !important;
}
.code-tab .el-tabs__content {
  padding: 0;
  padding-left: 0.5em;
}
.output-tab {
  border-left: 0 !important;
  border-right: 0 !important;
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

</style>
