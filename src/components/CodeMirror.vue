<template>
  <pre>
    <code :class="this.options.language">{{this.code}}</code>
  </pre>
</template>
<script>
  export default {
    props: ['code', 'options'],
    mounted () {
      this.$nextTick(() => {
        window.hljs.highlightBlock(this.$el.querySelector('code'))
      })
    }
  }
</script>
<style scoped>
  pre {
    margin: 0;
  }
  pre > code {
    font-size: 1em;
    font-weight: 700;
    margin: 0;
    margin-top: -1em;
    background: transparent;
    overflow: visible;
  }
</style>